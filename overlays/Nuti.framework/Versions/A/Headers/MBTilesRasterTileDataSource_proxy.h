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


#import "MapTile_proxy.h"
#import "RasterTileBitmap_proxy.h"
#import "RasterTileDataSource_proxy.h"

/**
 * A raster tile data source that loads tiles from a local Sqlite database.<br>
 * The database must contain table "tiles" with the following fields:<br>
 * "zoom_level" (tile zoom level), "tile_column" (tile x coordinate),<br>
 * "tile_row" (tile y coordinate), "tile_data" (compressed tile image).
 */
@interface NTMBTilesRasterTileDataSource : NTRasterTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a MBTilesRasterTileDataSource object.<br>
 * @param minZoom The minimum zoom level supported by this data source.<br>
 * @param maxZoom The maximum zoom level supported by this data source.<br>
 * @param path The path to the local Sqlite database file.
 */
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom path: (NSString*)path;
-(NTRasterTileBitmap*)loadTile: (NTMapTile*)mapTile;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

