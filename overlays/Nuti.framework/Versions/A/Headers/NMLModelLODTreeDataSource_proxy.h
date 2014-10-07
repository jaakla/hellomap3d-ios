/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "Projection_proxy.h"

/**
 * An abstract base class for NML model LOD tree data sources. NML model LOD tree data sources are tile based data sources<br>
 * that provide access to different entities: map tiles, LOD tree metadata, model meshes and textures.
 */
@interface NTNMLModelLODTreeDataSource : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Returns the projection used by this data source.<br>
 * @return The projection used by this data source.
 */
-(NTProjection*)getProjection;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

