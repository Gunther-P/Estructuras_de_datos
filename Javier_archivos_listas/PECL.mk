##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PECL
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/javie/Estructuras_de_datos
ProjectPath            :=C:/Users/javie/Estructuras_de_datos/PECL
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/PECL
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=javie
Date                   :=10/29/2026
CodeLitePath           :=C:/Users/javie/codelite/codelite-amd64-17.0.0/codelite
MakeDirCommand         :=mkdir
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/javie/Estructuras_de_datos/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch)src/Header_Files $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Users\javie\codelite\codelite-amd64-17.0.0\codelite
Objects0=$(IntermediateDirectory)/src_NodoLista.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Cola.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_NodoCola.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_PIla.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Controlador.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Paciente.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_NodoLista.cpp$(ObjectSuffix): src/NodoLista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoLista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoLista.cpp$(PreprocessSuffix): src/NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoLista.cpp$(PreprocessSuffix) src/NodoLista.cpp

$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix): src/NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix): src/NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoPila.cpp$(PreprocessSuffix) src/NodoPila.cpp

$(IntermediateDirectory)/src_Cola.cpp$(ObjectSuffix): src/Cola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Cola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Cola.cpp$(PreprocessSuffix): src/Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Cola.cpp$(PreprocessSuffix) src/Cola.cpp

$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix): src/Lista.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Lista.cpp$(PreprocessSuffix): src/Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Lista.cpp$(PreprocessSuffix) src/Lista.cpp

$(IntermediateDirectory)/src_NodoCola.cpp$(ObjectSuffix): src/NodoCola.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_NodoCola.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_NodoCola.cpp$(PreprocessSuffix): src/NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_NodoCola.cpp$(PreprocessSuffix) src/NodoCola.cpp

$(IntermediateDirectory)/src_PIla.cpp$(ObjectSuffix): src/PIla.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/PIla.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_PIla.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_PIla.cpp$(PreprocessSuffix): src/PIla.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_PIla.cpp$(PreprocessSuffix) src/PIla.cpp

$(IntermediateDirectory)/src_Controlador.cpp$(ObjectSuffix): src/Controlador.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/Controlador.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Controlador.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Controlador.cpp$(PreprocessSuffix): src/Controlador.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Controlador.cpp$(PreprocessSuffix) src/Controlador.cpp

$(IntermediateDirectory)/src_Paciente.cpp$(ObjectSuffix): src/Paciente.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/src/Paciente.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Paciente.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Paciente.cpp$(PreprocessSuffix): src/Paciente.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Paciente.cpp$(PreprocessSuffix) src/Paciente.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/javie/Estructuras_de_datos/PECL/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


