/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-launchpad/src/ddeintegration/xml/org.desktopspec.ObjectManager1.xml -a ./dde-launchpad/toolGenerate/qdbusxml2cpp/org.desktopspec.ObjectManager1Adaptor -i ./dde-launchpad/toolGenerate/qdbusxml2cpp/org.desktopspec.ObjectManager1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-launchpad/toolGenerate/qdbusxml2cpp/org.desktopspec.ObjectManager1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ObjectManagerAdaptor
 */

ObjectManagerAdaptor::ObjectManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ObjectManagerAdaptor::~ObjectManagerAdaptor()
{
    // destructor
}

ObjectMap ObjectManagerAdaptor::GetManagedObjects()
{
    // handle method call org.desktopspec.DBus.ObjectManager.GetManagedObjects
    ObjectMap objpath_interfaces_and_properties;
    QMetaObject::invokeMethod(parent(), "GetManagedObjects", Q_RETURN_ARG(ObjectMap, objpath_interfaces_and_properties));
    return objpath_interfaces_and_properties;
}

