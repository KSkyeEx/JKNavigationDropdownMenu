

#import <UIKit/UIKit.h>


@interface JKCustomButton : UIButton
@end

/* 🐖 ******************* 🐖 JKNavigationDropdownMenuDataSource 🐖 *******************  🐖 */


@class JKNavigationDropdownMenu;

@protocol JKNavigationDropdownMenuDataSource <NSObject>

@required
/**
 *  返回每一行对应的标题
 */
- (NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

@optional
/**
 *  下拉菜单的标题字体的大小；默认为 17号字体
 */
- (UIFont *)titleFontForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单的标题的字体颜色；默认为 黑色
 */
- (UIColor *)titleColorForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  标题右侧的图片；默认没有
 *
 */
- (UIImage *)arrowImageForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  动画执行的时间；默认为 0.25
 */
- (NSTimeInterval)animationDurationForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单每行的高度；默认为 45
 */
- (CGFloat)cellHeightForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单每行的分隔线的 insets；默认为 ：UIEdgeInsetsMake(0.0, 0.0, 0.0, 0.0)
 */
- (UIEdgeInsets)cellSeparatorInsetsForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单每行文字的对齐方式；默认为：NSTextAlignmentCenter
 */
- (NSTextAlignment)cellTextAlignmentForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单每行文字的字体的大小；默认为： [UIFont systemFontOfSize:16.0]
 */
- (UIFont *)cellTextFontForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单每行文字的颜色；默认为：黑色
 */
- (UIColor *)cellTextColorForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *   下拉菜单每行文字选中状态下的颜色；默认为：黑色
 */
- (UIColor *)cellSelectionTextColorForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;


/**
 *  下拉菜单每一行未选中状态下的背景颜色；默认为：白色
 */
- (UIColor *)cellBackgroundColorForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单每一行选中状态下的背景颜色；默认为：空
 */
- (UIColor *)cellSelectionBackgroundColorForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

/**
 *  下拉菜单的 footerView；默认为 空
 */
- (UIView *)footerViewForNavigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu;

@end

/* 🐖 ******************* 🐖 JKNavigationDropdownMenuDelegate 🐖 *******************  🐖 */

@protocol JKNavigationDropdownMenuDelegate <NSObject>

@required
- (void)navigationDropdownMenu:(JKNavigationDropdownMenu *)navigationDropdownMenu didSelectRowAtIndex:(NSUInteger)index;

@end


/* 🐖 ******************* 🐖 XCNavigationDropdownMenu 🐖 ******************* 🐖 */


@interface JKNavigationDropdownMenu : JKCustomButton

@property (nonatomic, weak) id <JKNavigationDropdownMenuDataSource> dataSource;
@property (nonatomic, weak) id <JKNavigationDropdownMenuDelegate> delegate;

/**
 *  根据一个导航控制器生成一个下拉菜单
 *
 *  @param navigationController 导航控制器
 */
- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;


/**
 刷新数据
 */
- (void)reloadData;

/**
 *  显示
 */
- (void)show;

/**
 *  隐藏
 */
- (void)hide;

@end
