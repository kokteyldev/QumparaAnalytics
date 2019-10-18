//
//  QPAnalytics.h
//  QPAnalytics
//
//  Created by Mehmet Karagöz on 17.10.2019.
//  Copyright © 2019 Kokteyl. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QPAnalytics : NSObject
+ (void)startWithApplicationId:(NSString *)applicationId;
+ (void)startWithApplicationId:(NSString *)applicationId campaignId:(NSString * _Nullable)campaignId;
+ (NSString *)SDKVersion;

+ (void)trackOfferwallDidOpen;
+ (void)trackOfferwallDidDismiss;
+ (void)trackOfferwallRedeemForCampaignId:(NSString *)campaignId;
+ (void)trackOfferwallRedirectForCampaignId:(NSString *)campaignId;
+ (void)trackOfferwallRedirectStoreForCampaignId:(NSString *)campaignId;
+ (void)trackOfferwallOfferOpenForCampaignId:(NSString *)campaignId;
+ (void)trackOfferwallOfferDismissForCampaignId:(NSString *)campaignId;

+ (void)trackQumparaInstall;
+ (void)trackQumparaRegister;
+ (void)trackQumparaCampaignDetailForQumparaCampaignId:(NSString *)qumparaCampaignId;
+ (void)trackQumparaSendReceipt;
@end

NS_ASSUME_NONNULL_END
