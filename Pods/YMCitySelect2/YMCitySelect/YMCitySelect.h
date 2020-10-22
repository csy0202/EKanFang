//代码地址：https://github.com/iosdeveloperSVIP/YMCitySelect
//原创：iosdeveloper赵依民
//邮箱：iosdeveloper@vip.163.com
//
//  YMCitySelect.h
//  YMCitySelect
//
//  Created by mac on 16/4/23.
//  Copyright © 2016年 YiMin. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "YMCityModel.h"
#import "YMCityGroupsModel.h"


@protocol YMCitySelectDelegate <NSObject>
@optional
- (void)ym_ymCitySelectCity:(YMCityModel *)city;

@end


typedef  NSArray<YMCityGroupsModel *>*(^GetDataSourceBlock)(void) ;


@interface YMCitySelect : UIViewController

-(instancetype)initWithDelegate:(id)targe;

@property (nonatomic,weak) id<YMCitySelectDelegate> ymDelegate;

///获取城市数据
@property (copy,nonatomic) GetDataSourceBlock getGroupBlock;
///左上角的关闭按钮的图片
@property (strong,nonatomic) UIImage *closeBtnImage;
///关闭按钮的动作
@property (assign,nonatomic) SEL closeBtnAct;
@property (strong,nonatomic) NSObject *closeBtnOwner;
//索引文本的颜色
@property (strong,nonatomic) UIColor *sectionIndexColor;
//table section文本的颜色
@property (strong,nonatomic) UIColor *tableSectionTextColor;
//table section背景的颜色
@property (strong,nonatomic) UIColor *tableSectionBackColor;

@property (strong,nonatomic) UIColor *textColor;
///隐藏多余的城市,viewDidLoad 之前设置
@property (assign,nonatomic) BOOL hideAddtionCitys;
@property (assign,nonatomic) UIStatusBarStyle statusBarStyle;

@end
