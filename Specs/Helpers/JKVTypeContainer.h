#import <Foundation/Foundation.h>
#import "JKVMutableValue.h"

@interface JKVTypeContainer : JKVMutableValue

@property (nonatomic, strong) NSString *obj;
@property (nonatomic, assign) NSInteger integer;
@property (nonatomic, assign, getter=isBoolean) BOOL boolean;
@property (atomic, assign) CGFloat floatValue;
@property (nonatomic, assign) double doubleValue;
@property (nonatomic, assign) int16_t int16Value;
@property (nonatomic, assign) int32_t int32Value;
@property (nonatomic, assign) int64_t int64Value;
@property (nonatomic, assign) CGPoint point;
@property (nonatomic, assign) CGRect rect;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGAffineTransform affineTransform;
@property (nonatomic, assign) UIEdgeInsets edgeInsets;
@property (nonatomic, assign) UIOffset offset;

@end
