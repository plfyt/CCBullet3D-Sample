/******************************************************************************

 @File         PVRTContext.h

 @Title        OGLES/PVRTContext

 @Version      

 @Copyright    Copyright (C)  Imagination Technologies Limited.

 @Platform     ANSI compatible

 @Description  Context specific stuff - i.e. 3D API-related.

******************************************************************************/
#ifndef _PVRTCONTEXT_H_
#define _PVRTCONTEXT_H_

#include <stdio.h>
#if defined(__APPLE__)
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#else
#if defined(__BADA__)
#include <FGraphicsOpengl.h>
using namespace Osp::Graphics::Opengl;
#else
#if !defined(EGL_NOT_PRESENT)
#include <GLES/egl.h>
#endif
#include <GLES/gl.h>
#endif
#endif
/****************************************************************************
** Macros
****************************************************************************/
#define PVRTRGBA(r, g, b, a)   ((GLuint) (((a) << 24) | ((b) << 16) | ((g) << 8) | (r)))

/****************************************************************************
** Defines
****************************************************************************/

/****************************************************************************
** Enumerations
****************************************************************************/

/****************************************************************************
** Structures
****************************************************************************/
/*!**************************************************************************
@Struct SPVRTContext
@Brief A structure for storing API specific variables
****************************************************************************/
struct SPVRTContext
{
	int reserved;	// No context info for OGLES.
};

/****************************************************************************
** Functions
****************************************************************************/


#endif /* _PVRTCONTEXT_H_ */

/*****************************************************************************
 End of file (PVRTContext.h)
*****************************************************************************/

