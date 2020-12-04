#include "video_camera.h"
#include <iostream>
#pragma once

using namespace std;

video_camera::video_camera()
{
    price = 15.99;
    resolution = 480;
    mCard = memory_card(128, "SD", 12);
    gProcessor = graphics_processor("EnVidia");
    recordingDay = 1;
    recordingMonth = 1;
    recordingYear = 2000;
}

video_camera::video_camera(float precio, int resolucion, int memSize, string memType, string graphicType, int gb, int dia, int mes, int anio)
{
    price = precio;
    resolution = resolucion;
    mCard = memory_card();
    gProcessor = graphics_processor();
    recordingMonth = mes;
    recordingYear = anio;
}

void video_camera::setGraphics(graphics_processor gProcess)
{
    gProcessor = gProcess;
}

graphics_processor video_camera::getGraphics()
{
    return gProcessor;
}
    
void video_camera::setMemory(memory_card memCard)
{
    mCard = memCard;
}

memory_card video_camera::getMemory()
{
    return mCard;
}

void video_camera::setPrice(float precio)
{
    price = precio;
}

float video_camera::getPrice()
{
    return price;
}

void video_camera::setResolution(int resolucion)
{
    resolution = resolucion;
}

int video_camera::getResolution()
{
    return resolution;
}

void video_camera::setRDay(int dia)
{
    recordingDay = dia;
}

int video_camera::getRDay()
{
    return recordingDay;
}

void video_camera::setRMonth(int mes)
{
    recordingMonth = mes;
}

int video_camera::getRMonth()
{
    return recordingMonth;
}

void video_camera::setRYear(int anio)
{
    recordingYear = anio;
}

int video_camera::getRYear()
{
    return recordingYear;
}

void video_camera::imprimirDetallesCamara()
{
    cout << "\nPrecio: $" << price;
    cout << "\nResolucion: " << resolution << "px";
    cout << "\nFecha de grabacion: " << recordingDay << "/" << recordingMonth << "/" << recordingYear;
    cout << "\nProcesador grafico: " << gProcessor.getType();
    cout << "\nTarjeta de memoria: " << mCard.getType();
    cout << "\nCapacidad de memoria: " << mCard.getCapacity();
}
