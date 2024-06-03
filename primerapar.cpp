MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("calculadora con interfaz de la clase de Rivelino");
    ui->resultado->setText("0.0");
}

MainWindow::~MainWindow()
{
    delete ui;
