
Pod::Spec.new do |s|
  s.name         = "PushmanSDK"
  s.version      = "0.1.4"
  s.summary      = "PushmanSDK"
  s.homepage     = "http://www.pushman.js"
  s.license = {
    :type => 'Copyright',
    :text => 'Copyright (c) 2014 sonicmoov co.,ltd.'
  }
  s.author       = "Pushman"
  s.source       = {
    :git => "https://github.com/Pushman/PushmanSDK-iOS.git",
    :tag => "release-0.1.4"
  }
  s.platform   = :ios
  s.frameworks = 'AudioToolbox', 'SystemConfiguration'
  s.preserve_paths = "PushmanSDK/PushmanSDK.framework"
  s.public_header_files = "PushmanSDK/PushmanSDK.framework/**/*.h"
  s.vendored_frameworks = 'PushmanSDK/PushmanSDK.framework'
  s.requires_arc = true
end
