// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HPALETTE__.hpp>
#include <IAdviseSinkEx.hpp>
#include <IBindHost.hpp>
#include <IFont.hpp>
#include <IOleClientSite.hpp>
#include <IOleControlSite.hpp>
#include <IOleUndoManager.hpp>
#include <IPropertyNotifySink.hpp>
#include <IServiceProvider.hpp>
#include <IUnknown.hpp>


START_ATF_NAMESPACE
    struct tagQACONTAINER
    {
        unsigned int cbSize;
        IOleClientSite *pClientSite;
        IAdviseSinkEx *pAdviseSink;
        IPropertyNotifySink *pPropertyNotifySink;
        IUnknown *pUnkEventSink;
        unsigned int dwAmbientFlags;
        unsigned int colorFore;
        unsigned int colorBack;
        IFont *pFont;
        IOleUndoManager *pUndoMgr;
        unsigned int dwAppearance;
        int lcid;
        HPALETTE__ *hpal;
        IBindHost *pBindHost;
        IOleControlSite *pOleControlSite;
        IServiceProvider *pServiceProvider;
    };
END_ATF_NAMESPACE
