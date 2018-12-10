Pod::Spec.new do |s|
  s.name             = 'Glimpse'
  s.version          = '1.0'
  s.summary          = 'Glimpse is a simple library that allows you to create videos from UIViews.'
  s.description      = <<-DESC
Glimpse is a simple library that allows you to create videos from UIViews. It records animations and actions as they happen by taking screen shots of a UIView in a series and then creating a quicktime video and saving it to your app’s document folder.
                       DESC

  s.homepage         = 'https://github.com/wess/Glimpse'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Wess Cope' => 'wcope@me.com' }
  s.source           = { :git => 'https://github.com/wess/Glimpse.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'Glimpse/Glimpse/*.{h,m}'


  s.public_header_files = 'Glimpse/Glimpse/Glimpse.h'
  s.frameworks = 'MobileCoreServices', 'AssetsLibrary','CoreVideo','QuartzCore','UIKit'
end
