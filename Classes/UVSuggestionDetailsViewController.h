//
//  UVSuggestionDetailsViewController.h
//  UserVoice
//
//  Created by UserVoice on 10/29/09.
//  Copyright 2009 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UVBaseViewController.h"
#import "UVSuggestion.h"

@interface UVSuggestionDetailsViewController : UVBaseViewController <UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate> {
    UVSuggestion *suggestion;
    NSMutableArray *comments;
    UIScrollView *scrollView;
    UIView *statusBar;
    BOOL allCommentsRetrieved;
    UILabel *titleLabel;
    UILabel *votesLabel;
    UILabel *descriptionLabel;
    UILabel *creatorLabel;
    UIView *responseView;
    UILabel *responseLabel;
    UIView *buttons;
}

@property (nonatomic, retain) UVSuggestion *suggestion;
@property (nonatomic, retain) NSMutableArray *comments;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *statusBar;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *votesLabel;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UILabel *creatorLabel;
@property (nonatomic, retain) UILabel *responseLabel;
@property (nonatomic, retain) UIView *responseView;
@property (nonatomic, retain) UIView *buttons;

- (id)initWithSuggestion:(UVSuggestion *)theSuggestion;

@end
