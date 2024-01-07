class simple_timer < Formula
  desc "Easy to use CLI clock/stopwatch"
  homepage "https://github.com/Yeeun888/simple_timer"
  url "https://github.com/federico-terzi/espanso/releases/latest/download/espanso-mac.tar.gz"
  sha256 "c0902320a4ff22f91e54797db290ac18bf2b765732842ddf66d8df8c4fe1176c"
  version "0.0.2"

  def install
    bin.install "simpletimer"
  end
end

