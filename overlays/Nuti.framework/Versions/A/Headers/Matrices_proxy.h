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

/**
 * A square matrix of type T with N rows and N columns.<br>
 * T is assumed to be float or double (although should work in other<br>
 * instances also).
 */
@interface MatrixFBase : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(float)get: (unsigned long)r c: (unsigned long)c;

-(void)dealloc;

@end

@interface Matrix4F : MatrixFBase
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

-(void)dealloc;

@end

/**
 * A square matrix of type T with N rows and N columns.<br>
 * T is assumed to be float or double (although should work in other<br>
 * instances also).
 */
@interface MatrixDBase : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(double)get: (unsigned long)r c: (unsigned long)c;

-(void)dealloc;

@end

@interface Matrix4D : MatrixDBase
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

