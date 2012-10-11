require 'rake/clean'

#CC = "g++ -std=c++11"
CC = "g++"

task :default => "all"

GTEST_DIR = '~/work/programming/c/lib/gtest-1.6.0'

SRCS = FileList["**/*.cpp"]
OBJS = SRCS.ext('o')

LIB_OPTION = "#{GTEST_DIR}/make/gtest_main.a"
INC_OPTION = "-I #{GTEST_DIR}/include"

file "all" => OBJS do |t|
  sh "#{CC} #{LIB_OPTION} -o #{t.name} #{t.prerequisites.join(' ')}" 
end

rule '.o' => '.cpp' do |t|
  sh "#{CC} #{INC_OPTION} -c #{t.source} -o #{t}"
end

task "run" do
  sh "./all"
end

task "lib" do
  sh "cd #{GTEST_DIR}/make && make clean && make"
end

CLEAN.include(OBJS)
CLOBBER.include("all")

