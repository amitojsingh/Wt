#include<Wt/WApplication>
#include<Wt/WText>
#include<Wt/WContainerWidget>
#include<Wt/WImage>
#include<Wt/WEnvironment>
#include<Wt/WLink>
#include<Wt/WContainerWidget>
using namespace Wt;
class index:public WApplication
{
public:
index(const WEnvironment& env);
private:WText *heading;
WLink *link;
WImage *img;
WContainerWidget *paragraph, *child2;
};
index::index(const WEnvironment& env)
:WApplication(env)
{
setTitle("Amrit Villa");
useStyleSheet("index.css");
heading=new WText("Amrit Villa");
heading->setStyleClass("heading");
img=new WImage(Wlink& "5.jpeg");
paragraph->addWidget(new WText("Welcome to the house of Glories"));
root()->addWidget(new WContainerWidget("Paragraph"));
paragraph->setStyleClass("paragraph");
}
WApplication *createApplication(const WEnvironment& env)
{
return new index(env);
}
int main(int argc, char **argv)
{
return WRun(argc, argv, &createApplication);
