//
//  NCRichDocumentTemplate.h
//  Nextcloud
//
//  Created by Marino Faggiana on 14/11/2018.
//  Copyright (c) 2017 Marino Faggiana. All rights reserved.
//
//  Author Marino Faggiana <m.faggiana@twsweb.it>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NCRichDocumentTemplate : NSObject

@property NSInteger templateID;
@property (nonatomic, strong) NSString *delete;
@property (nonatomic, strong) NSString *extension;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *preview;
@property (nonatomic, strong) NSString *type;

@end

NS_ASSUME_NONNULL_END
