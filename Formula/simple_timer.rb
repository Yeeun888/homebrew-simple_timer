class simple_timer < Formula
  desc "Easy to use CLI clock/stopwatch"
  homepage "https://github.com/Yeeun888/simple_timer"
  url "https://github.com/Yeeun888/simple_timer/releases/download/v0.1.0/simpletimer.tar.gz"
  sha256 "f457c02cf0bb3200b33602ef27413ff6cdcee9ccbcd34c64a0995d835f03ca5a"
  version "v0.1.0"

  def install
    bin.install "simpletimer"
  end
end

