#include"graphics_processor.h"
#include"memory_card.h"
#include"common_attributes.h"
#pragma once

class video_camera : public graphics_processor, public memory_card, public common_attributes
{
protected:
    graphics_processor gProcessor;
    memory_card mCard;
    float price;
    int resolution;
    int recordingDay;
    int recordingMonth;
    int recordingYear;


public:
    video_camera();
    video_camera(float precio, int resolucion, int memSize, string memType, string graphicType, int gb, int dia, int mes, int anio);

    void setGraphics(graphics_processor gProcess);
    graphics_processor getGraphics();
    
    void setMemory(memory_card memCard);
    memory_card getMemory();

    void setPrice(float precio);
    float getPrice();

    void setRDay(int dia);
    int getRDay();

    void setRMonth(int mes);
    int getRMonth();

    void setRYear(int anio);
    int getRYear();

    void setResolution(int resolucion);
    int getResolution();

    void imprimirDetallesCamara();
};