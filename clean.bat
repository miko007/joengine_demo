@ECHO Off
SET COMPILER_DIR=engine\Compiler
SET JO_ENGINE_SRC_DIR=engine/jo_engine
SET PATH=%COMPILER_DIR%\WINDOWS\Other Utilities;%PATH%

rm -f ./cd/0.bin
rm -f *.o
rm -f %JO_ENGINE_SRC_DIR%/*.o
rm -f ./*.bin
rm -f ./*.raw
rm -f ./*.coff
rm -f ./*.elf
rm -f ./*.map
rm -f ./*.iso
rm -f ./*.cue

ECHO Done.
