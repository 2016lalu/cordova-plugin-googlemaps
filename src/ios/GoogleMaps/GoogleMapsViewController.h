//
//  GoogleMapsViewController.h
//  SimpleMap
//
//  Created by masashi on 11/6/13.
//
//

#import <Cordova/CDV.h>
#import <GoogleMaps/GoogleMaps.h>
#import <UIKit/UIKit.h>
#import "PluginUtil.h"
#import "NSData+Base64.h"
#import "PluginWindow.h"

@interface GoogleMapsViewController : UIViewController<GMSMapViewDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, strong) GMSMapView* map;
@property (nonatomic, strong) UIWebView* webView;
@property (nonatomic, strong) NSMutableDictionary* overlayManager;
@property (nonatomic, readwrite, strong) NSMutableDictionary* plugins;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) NSDictionary *embedRect;
@property (nonatomic) CGRect screenSize;


//- (UIView *)mapView:(GMSMapView *)mapView markerInfoWindow:(GMSMarker *)marker;
- (id)initWithOptions:(NSDictionary *) options;

- (GMSCircle *)getCircleByKey: (NSString *)key;
- (GMSMarker *)getMarkerByKey: (NSString *)key;
- (GMSPolygon *)getPolygonByKey: (NSString *)key;
- (GMSPolyline *)getPolylineByKey: (NSString *)key;
- (GMSTileLayer *)getTileLayerByKey: (NSString *)key;
- (GMSGroundOverlay *)getGroundOverlayByKey: (NSString *)key;
- (UIImage *)getUIImageByKey: (NSString *)key;
- (void)updateMapViewLayout: (BOOL)animated;

- (void)removeObjectForKey: (NSString *)key;
- (BOOL)didTapMyLocationButtonForMapView:(GMSMapView *)mapView;
@end