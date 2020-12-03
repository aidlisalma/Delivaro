#include "partenaire.h"

partenaire::partenaire()
{

}

bool partenaire::ajouter()
{
    QSqlQuery query;


        query.prepare("INSERT INTO PARTENAIRES (NOM,IDENTIFIANT,NOMBRE_COMMANDES,TYPE_PRODUIT) VALUES(:NOM,:IDENTIFIANT,:NOMBRE_COMMANDES,:TYPE_PRODUIT)");

        query.bindValue(":NOM",NOM );
        query.bindValue(":IDENTIFIANT",IDENTIFIANT );
        query.bindValue(":NOMBRE_COMMANDES",NOMBRE_COMMANDES );
        query.bindValue(":TYPE_PRODUIT",TYPE_PRODUIT );

  return query.exec();
}

QSqlQueryModel* partenaire::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    model->setQuery("select* from PARTENAIRES");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOMBRE_COMMANDES"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("TYPE_PRODUIT"));

    return model;
}


bool partenaire::supprimer(QString nom)
{  QSqlQuery qry;
    qry.prepare("Delete from PARTENAIRES where NOM = :NOM");
    qry.bindValue(":NOM",nom);
    return qry.exec();
}

QSqlQueryModel * partenaire::trier_partenaire()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("SELECT * from PARTENAIRES ORDER BY IDENTIFIANT ASC");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOMBRE_COMMANDES"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("TYPE_PRODUIT"));

    return model;
}


QSqlQueryModel * partenaire::chercher_partenaire(QString id){
QSqlQuery q;
q.prepare("select * from PARTENAIRES where IDENTIFIANT=:IDENTIFIANT");
q.bindValue(":IDENTIFIANT", id);
q.exec();
QSqlQueryModel * model = new QSqlQueryModel;
model->setQuery(q);
model->setHeaderData(0,Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("IDENTIFIANT"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOMBRE_COMMANDES"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("TYPE_PRODUIT"));

QSqlRecord rec = model->record(0);
QString idd = rec.value("IDENTIFIANT").toString();
if( idd == id){
    return model;
  }
    return nullptr;
}

QVector<double> partenaire::getData()
{
    QVector<double>testData;

    QSqlQuery query("select AVG(NOMBRE_COMMANDES)from PARTENAIRES where TYPE_PRODUIT ='alimentaire' ");
    while(query.next()){
        int erreur=0;
        int e3=0;
        int e4=0;
        int errerE=query.value(0).toInt();
        QSqlQuery query2("select AVG(NOMBRE_COMMANDES)from PARTENAIRES where TYPE_PRODUIT ='divers' ");
    while(query2.next()){
        erreur=query2.value(0).toInt();
        QSqlQuery query3("select AVG(NOMBRE_COMMANDES)from PARTENAIRES where TYPE_PRODUIT ='esthétique' ");
        while (query3.next())
        { e3=query3.value(0).toInt();
            QSqlQuery query4("select AVG(NOMBRE_COMMANDES)from PARTENAIRES where TYPE_PRODUIT ='vestimentaire' ");
            while (query4.next()) {
                e4=query4.value(0).toInt();
            break;}

       break; }
    break;}
    testData<< errerE << erreur << e3 << e4 ;
        break;}

    return testData;  }

void partenaire::imprimerpdf(QTableView *table)
{
QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append("partenaires.pdf"); }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);
        QAbstractItemModel *model =  table->model();
        QTextDocument doc;
        QSqlQuery q;
        q.prepare("SELECT * FROM PARTENAIRES ");
        q.exec();
        QString pdf="<br> <img src='C:/Users/legion/Documents/GitHub/Smart_Home_Delivery_2A1/Salma Aidli/InterfaceGraphique/logo.png' height='42' width='144'/> <h1  style='color:red'>LISTE DES PARTENAIRES  <br></h1>\n <br> <table>  <tr>  <th> NOM </th> <th> IDENTIFIANT </th> <th> NOMBRE_COMMANDES </th> <th> TYPE_PRODUIT </th>  </tr>" ;


        while ( q.next()) {

            pdf= pdf+ " <br> <tr> <td>"+ q.value(0).toString()+"    </td>   <td>   " + q.value(1).toString() +"</td>   <td>" +q.value(2).toString() +"  "" " "</td>   <td>"+q.value(3).toString()+"</td>    <td>"+q.value(4).toString()+" </td>" ;

        }
        doc.setHtml(pdf);
        doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
        doc.print(&printer); }
