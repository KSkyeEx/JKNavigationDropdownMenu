Pod::Spec.new do |s|
s.name = 'JKNavigationDropdownMenu'
s.version = '0.0.1'
s.summary = 'An easy way to use frame'
s.homepage = 'https://github.com/JokerKin/JKNavigationDropdownMenu'
s.license = 'MIT'
s.authors = {"JokerKin" => "weijoker_king@163.com"}
s.platform = :ios, '8.0'
s.source = {:git => 'https://github.com/JokerKin/JKNavigationDropdownMenu.git', :tag => s.version}
s.source_files = "JKNavigationDropdownMenu", "JKNavigationDropdownMenu/**/*.{h,m}"
s.requires_arc = true
end
