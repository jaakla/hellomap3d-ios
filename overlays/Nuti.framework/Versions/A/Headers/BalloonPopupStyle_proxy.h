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


#import "PopupStyle_proxy.h"
#import <UIKit/UIKit.h>

@interface NTBalloonPopupMargins : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)initWithLeft: (int)left top: (int)top right: (int)right bottom: (int)bottom;
-(int)getLeft;
-(int)getTop;
-(int)getRight;
-(int)getBottom;

-(void)dealloc;

@end


#import "PopupStyle_proxy.h"
#import <UIKit/UIKit.h>

/**
 * A style for balloon popups. Contains attributes for configuring how the balloon popup is drawn on the screen.
 */
@interface NTBalloonPopupStyle : NTPopupStyle
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a BalloonPopupStyle object from various parameters. Instantiating the object directly is<br>
 * not recommended, BalloonPopupStyleBuilder should be used instead.<br>
 * @param color The color for the popup.<br>
 * @param attachAnchorPointX The horizontal attaching anchor point for the popup.<br>
 * @param attachAnchorPointY The vertical attaching anchor point for the popup.<br>
 * @param causesOverlap The causes overlap flag for the billboard.<br>
 * @param hideIfOverlapped The hide if overlapped flag for the billboard.<br>
 * @param horizontalOffset The horizontal offset for the popup.<br>
 * @param verticalOffset The vertical offset for the popup.<br>
 * @param placementPriority The placement priority for the popup.<br>
 * <br>
 * @param cornerRadius The corner radius of the popup in dp.<br>
 * @param leftColor The background color of the left part of the popup.<br>
 * @param leftImage The image of the left part of the popup.<br>
 * @param leftMargins The margins of the left part of the popup.<br>
 * @param rightColor The background color of the right part of the popup.<br>
 * @param rightImage The margins of the right part of the popup.<br>
 * @param rightMargins The margins of the right part of the popup.<br>
 * @param titleColor The color of the title.<br>
 * @param titleFontName The name of the title font.<br>
 * @param titleFontSize The size of the title font.<br>
 * @param titleMargins The margins of the title.<br>
 * @param titleWrap True if long titles are wrapped, false if it is truncated.<br>
 * @param descColor The color of the description.<br>
 * @param descFontName The name of the description font.<br>
 * @param descFontSize The size of the description font.<br>
 * @param descMargins The margins of the description.<br>
 * @param descWrap True if long descriptions are wrapped, false if it is truncated.<br>
 * @param strokeColor The color of the stroke surrounding the popup.<br>
 * @param strokeWidth The width of the stroke surrounding the popup in dp.<br>
 * @param triangleWidth The width of the triangle at the bottom of the popup in dp.<br>
 * @param triangleHeight The height of the triangle at the bottom of the popup in dp.
 */
-(id)initWithColor: (NTColor*)color attachAnchorPointX: (float)attachAnchorPointX attachAnchorPointY: (float)attachAnchorPointY causesOverlap: (BOOL)causesOverlap hideIfOverlapped: (BOOL)hideIfOverlapped horizontalOffset: (float)horizontalOffset verticalOffset: (float)verticalOffset placementPriority: (int)placementPriority scaleWithDPI: (BOOL)scaleWithDPI cornerRadius: (int)cornerRadius leftColor: (NTColor*)leftColor leftImage: (UIImage*)leftImage leftMargins: (NTBalloonPopupMargins*)leftMargins rightColor: (NTColor*)rightColor rightImage: (UIImage*)rightImage rightMargins: (NTBalloonPopupMargins*)rightMargins titleColor: (NTColor*)titleColor titleFontName: (NSString*)titleFontName titleFontSize: (int)titleFontSize titleMargins: (NTBalloonPopupMargins*)titleMargins titleWrap: (BOOL)titleWrap descColor: (NTColor*)descColor descFontName: (NSString*)descFontName descFontSize: (int)descFontSize descMargins: (NTBalloonPopupMargins*)descMargins descWrap: (BOOL)descWrap strokeColor: (NTColor*)strokeColor strokeWidth: (int)strokeWidth triangleWidth: (int)triangleWidth triangleHeight: (int)triangleHeight;
/**
 * Returns the background color of the popup.<br>
 * @return The background color of the popup.
 */
-(NTColor*)getBackgroundColor;
/**
 * Returns the corner radius of the popup.<br>
 * @return The corner radius of the popup.
 */
-(int)getCornerRadius;
/**
 * Returns the background color of the left part of the popup.<br>
 * @return The background color of the left part of the popup.
 */
-(NTColor*)getLeftColor;
/**
 * Returns the image of the left part of the popup.<br>
 * @return The image of the left part of the popup.
 */
-(UIImage*)getLeftImage;
/**
 * Returns the margins of the left part of the popup.<br>
 * @return The margins of the left part of the popup.
 */
-(NTBalloonPopupMargins*)getLeftMargins;
/**
 * Returns the background color of the right part of the popup.<br>
 * @return The background color of the right part of the popup.
 */
-(NTColor*)getRightColor;
/**
 * Returns the image of the right part of the popup.<br>
 * @return The image of the right part of the popup.
 */
-(UIImage*)getRightImage;
/**
 * Returns the margins of the right part of the popup.<br>
 * @return The margins of the right part of the popup.
 */
-(NTBalloonPopupMargins*)getRightMargins;
/**
 * Returns the color of the title.<br>
 * @return The color of the title.
 */
-(NTColor*)getTitleColor;
/**
 * Returns the name of the title font.<br>
 * @return The name of the title font.
 */
-(NSString*)getTitleFontName;
/**
 * Returns the size of the title font.<br>
 * @return The size of the title font.
 */
-(int)getTitleFontSize;
/**
 * Returns the margins of the title.<br>
 * @return The margins of the title.
 */
-(NTBalloonPopupMargins*)getTitleMargins;
/**
 * Returns the state of the title wrap parameter.<br>
 * @return True if long titles are wrapped, false if it is truncated.
 */
-(BOOL)isTitleWrap;
/**
 * Returns the color of the description.<br>
 * @return The color of the description.
 */
-(NTColor*)getDescriptionColor;
/**
 * Returns the name of the description font.<br>
 * @return The name of the description font.
 */
-(NSString*)getDescriptionFontName;
/**
 * Returns the size of the description font.<br>
 * @return The size of the description font.
 */
-(int)getDescriptionFontSize;
/**
 * Returns the margins of the description.<br>
 * @return The margins of the description.
 */
-(NTBalloonPopupMargins*)getDescriptionMargins;
/**
 * Returns the state of the description wrap parameter.<br>
 * @return True if long descriptions are wrapped, false if it is truncated.
 */
-(BOOL)isDescriptionWrap;
/**
 * Returns the color of the stroke surrounding the popup.<br>
 * @return The color of the stroke surrounding the popup.
 */
-(NTColor*)getStrokeColor;
/**
 * Returns the width of the stroke surrounding the popup.<br>
 * @return The width of the stroke surrounding the popup in dp.
 */
-(int)getStrokeWidth;
/**
 * Returns the width of the triangle at the bottom of the popup.<br>
 * @return The width of the triangle at the bottom of the popup in dp.
 */
-(int)getTriangleWidth;
/**
 * Returns the height of the triangle at the bottom of the popup.<br>
 * @return The height of the triangle at the bottom of the popup in dp.
 */
-(int)getTriangleHeight;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

