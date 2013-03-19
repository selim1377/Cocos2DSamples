//
//  JSONDocument.h
//  PAE_iOS_SDK
//
//  Created by Shephertz Technology on 13/04/12.
//  Copyright (c) 2012 ShephertzTechnology PVT LTD. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Storage;

/**
 * An inner class that contains the remaining properties of the Storage.
 *
 */


@interface JSONDocument : NSObject{
    NSString *jsonDoc;
    NSString *docId;
    Storage *storageObject;
    
}
/*!
 *set and get the json doc for Storage.
 */
@property(nonatomic,retain)NSString *jsonDoc;
/*!
 *set and get the document Id for the Storage.
 */
@property(nonatomic,retain)NSString *docId;
/*!
 *set and get the storageObject for JSONDocument Object.
 */
@property(nonatomic,retain)Storage *storageObject;

- (id) init __attribute__((unavailable));

-(id)initWithStorage:(Storage*)storageObj;

@end
