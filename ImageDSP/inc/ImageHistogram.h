
#ifndef IMAGEHISTOGRAM_H_
#define IMAGEHISTOGRAM_H_

#include <QDebug>

/*******************************************************************************************************************************/
/* Simple contrast improvement */
/*******************************************************************************************************************************/
void simpleContrastImp (const uchar input[], int x_size, int y_size, uchar output[]);

/*******************************************************************************************************************************/
/* Calculate image histogram */
/*******************************************************************************************************************************/
//void calculateHistogram(const uchar inputImgY[], int x, int y, int histogram[]);

/*******************************************************************************************************************************/
/* Equalize image histogram */
/*******************************************************************************************************************************/
//void equalizeHistogram(const uchar input[], int xSize, int ySize, uchar output[], uchar L);

/*******************************************************************************************************************************/
/* Plot image histogram */
/*******************************************************************************************************************************/
//QImage createHistogramPlot(int histogram[], int start, int end);

/*******************************************************************************************************************************/
/* Modify colour saturation */
/*******************************************************************************************************************************/
//void modifySaturation(const uchar inputRGB[], const uchar inputY[], int xSize, int ySize, uchar outputRGB[], double S);

#endif // IMAGEHISTOGRAM_H_
