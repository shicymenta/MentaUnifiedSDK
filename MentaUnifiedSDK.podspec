#
#  Be sure to run `pod spec lint MentaVlionBaseSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "MentaUnifiedSDK"
  spec.version      = "5.20.10"
  spec.summary      = "MentaUnifiedSDK 基础库"

  spec.description  = <<-DESC
               基础库
                   DESC

  spec.homepage     = "https://github.com/shicymenta/MentaUnifiedSDK"

  spec.license      = "MIT"
  spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  spec.author             = { "shicymenta" => "shicy@mentamob.com" }
  spec.platform     = :ios, "9.0" 
  spec.ios.deployment_target = '9.0'

  spec.source       = { :git => "https://github.com/shicymenta/MentaUnifiedSDK.git", :tag => "#{spec.version}" }  #

  spec.frameworks       = 'StoreKit', 'SafariServices', 'MessageUI', 'CoreMedia', 'CoreMotion', 'SystemConfiguration', 'CoreLocation', 'CoreTelephony', 'AVFoundation', 'AdSupport'
  spec.libraries        = 'c++'
  spec.weak_frameworks = 'WebKit', 'AdSupport'
  spec.dependency  'MentaVlionBaseSDK', '0.0.8'
  # spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.vendored_frameworks     = 'Classes/MentaUnifiedSDK.framework'

  spec.subspec 'MVlionAdapter' do |mv|
    mv.dependency 'MentaVlionSDK'
    mv.vendored_frameworks     = 'Classes/Adapters/MentaMVlionAdapter.framework'
    mv.frameworks = 'UIKit', 'MapKit', 'MediaPlayer', 'CoreLocation', 'AdSupport', 'CoreMedia', 'AVFoundation', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreMotion', 'Accelerate','AudioToolbox','JavaScriptCore','Security','CoreImage','AudioToolbox','ImageIO','QuartzCore','CoreGraphics','CoreText'
    mv.libraries = 'c++', 'resolv', 'z', 'sqlite3', 'bz2', 'xml2', 'iconv', 'c++abi'
    mv.weak_frameworks = 'WebKit'
  end

  spec.subspec 'MentaJDYunAdapter' do |jd|
    jd.dependency 'JADYun'
    jd.vendored_frameworks     = 'Classes/Adapters/MentaJDYunAdapter.framework'
    jd.frameworks = 'CoreLocation','CoreMotion', 'MapKit', 'AdSupport','CoreTelephony','UIKit', 'ImageIO','Accelerate','Photos','AssetsLibrary','CoreServices'
    jd.libraries = 'z', 'sqlite3'
    jd.weak_frameworks = 'WebKit'
  end

  spec.subspec 'MentaTanxAdapter' do |tanx|

    tanx.dependency 'MentaTanxSDK'
    tanx.vendored_frameworks     = 'Classes/Adapters/MentaTanxAdapter.framework'
    tanx.frameworks = 'AdSupport', 'CoreMotion', 'CoreTelephony', 'SystemConfiguration',
    tanx.libraries = 'resolv', 'z', 'sqlite3.0'
    tanx.weak_frameworks = 'WebKit'
  end

end
