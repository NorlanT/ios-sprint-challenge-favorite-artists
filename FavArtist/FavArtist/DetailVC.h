//
//  DetailVC.h
//  FavArtist
//
//  Created by Norlan Tibanear on 1/27/21.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class ArtistController;
@class Artist;

@interface DetailVC : UIViewController <UISearchBarDelegate>

@property (nonatomic) Artist *artist;
@property (nonatomic) ArtistController *artistController;

@end

NS_ASSUME_NONNULL_END
