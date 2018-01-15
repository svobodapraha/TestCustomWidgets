#include "myled.h"
#include "myledplugin.h"

#include <QtPlugin>

MyLEDPlugin::MyLEDPlugin(QObject *parent)
  : QObject(parent)
{
  m_initialized = false;
}

void MyLEDPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
  if (m_initialized)
    return;

  // Add extension registrations, etc. here

  m_initialized = true;
}

bool MyLEDPlugin::isInitialized() const
{
  return m_initialized;
}

QWidget *MyLEDPlugin::createWidget(QWidget *parent)
{
  return new MyLED(parent);
}

QString MyLEDPlugin::name() const
{
  return QLatin1String("MyLED");
}

QString MyLEDPlugin::group() const
{
  return QLatin1String("");
}

QIcon MyLEDPlugin::icon() const
{
  return QIcon();
}

QString MyLEDPlugin::toolTip() const
{
  return QLatin1String("");
}

QString MyLEDPlugin::whatsThis() const
{
  return QLatin1String("");
}

bool MyLEDPlugin::isContainer() const
{
  return false;
}

QString MyLEDPlugin::domXml() const
{
  return QLatin1String("<widget class=\"MyLED\" name=\"myLED\">\n</widget>\n");
}

QString MyLEDPlugin::includeFile() const
{
  return QLatin1String("myled.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(myledplugin, MyLEDPlugin)
#endif // QT_VERSION < 0x050000
