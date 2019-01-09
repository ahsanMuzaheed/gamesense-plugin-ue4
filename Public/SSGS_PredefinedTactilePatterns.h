#pragma once


#include "SSGS_PredefinedTactilePatterns.generated.h"


USTRUCT( BlueprintType )
struct FSSGS_PredefinedTactilePattern
{
    GENERATED_BODY();
    UPROPERTY( BlueprintReadOnly ) FString name;
};

UCLASS( BlueprintType )
class USSGS_PredefinedTactilePatternFactory : public UObject
{

    GENERATED_BODY()

public:

    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_sharpclick_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_sharpclick_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_sharpclick_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_sharpclick_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_sharpclick_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_sharpclick_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_softbump_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_softbump_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_softbump_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_softbump_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_softbump_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_softbump_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_doubleclick_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_doubleclick_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_doubleclick_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_doubleclick_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_tripleclick_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_doubleclick_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_softfuzz_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_softfuzz_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongbuzz_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongbuzz_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzzalert750ms() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzzalert750ms" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzzalert1000ms() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzzalert1000ms" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_strongclick4_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_strongclick4_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_mediumclick1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_mediumclick1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_mediumclick2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_mediumclick2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_mediumclick3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_mediumclick3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_sharptick1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_sharptick1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_sharptick2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_sharptick2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_sharptick3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_sharptick3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickstrong1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickstrong1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickstrong2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickstrong2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickstrong3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickstrong3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickstrong4_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickstrong4_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickmedium1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickmedium1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickmedium2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickmedium2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoubleclickmedium3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoubleclickmedium3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoublesharptick1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoublesharptick1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoublesharptick2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoublesharptick2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_shortdoublesharptick3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_shortdoublesharptick3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickstrong1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickstrong1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickstrong2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickstrong2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickstrong3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickstrong3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickstrong4_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickstrong4_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickmedium1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickmedium1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickmedium2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickmedium2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharpclickmedium3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharpclickmedium3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharptick1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharptick1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharptick2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharptick2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longdoublesharptick3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longdoublesharptick3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzz1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzz1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzz2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzz2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzz3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzz3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzz4_40() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzz4_40" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_buzz5_20() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_buzz5_20" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_pulsingstrong1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_pulsingstrong1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_pulsingstrong2_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_pulsingstrong2_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_pulsingmedium1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_pulsingmedium1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_pulsingmedium2_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_pulsingmedium2_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_pulsingsharp1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_pulsingsharp1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_pulsingsharp2_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_pulsingsharp2_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionclick1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionclick1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionclick2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionclick2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionclick3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionclick3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionclick4_40() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionclick4_40" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionclick5_20() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionclick5_20" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionclick6_10() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionclick6_10" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionhum1_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionhum1_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionhum2_80() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionhum2_80" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionhum3_60() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionhum3_60" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionhum4_40() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionhum4_40" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionhum5_20() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionhum5_20" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionhum6_10() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionhum6_10" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsmooth1_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsmooth1_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsmooth2_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsmooth2_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsmooth1_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsmooth1_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsmooth2_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsmooth2_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsmooth1_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsmooth1_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsmooth2_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsmooth2_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsharp1_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsharp1_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsharp2_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsharp2_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsharp1_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsharp1_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsharp2_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsharp2_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsharp1_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsharp1_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsharp2_100to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsharp2_100to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsmooth1_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsmooth1_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsmooth2_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsmooth2_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsmooth1_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsmooth1_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsmooth2_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsmooth2_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsmooth1_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsmooth1_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsmooth2_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsmooth2_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsharp1_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsharp1_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsharp2_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsharp2_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsharp1_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsharp1_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsharp2_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsharp2_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsharp1_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsharp1_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsharp2_0to100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsharp2_0to100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsmooth1_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsmooth1_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsmooth2_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsmooth2_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsmooth1_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsmooth1_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsmooth2_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsmooth2_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsmooth1_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsmooth1_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsmooth2_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsmooth2_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsharp1_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsharp1_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownlongsharp2_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownlongsharp2_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsharp1_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsharp1_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownmediumsharp2_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownmediumsharp2_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsharp1_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsharp1_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampdownshortsharp2_50to0() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampdownshortsharp2_50to0" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsmooth1_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsmooth1_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsmooth2_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsmooth2_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsmooth1_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsmooth1_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsmooth2_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsmooth2_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsmooth1_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsmooth1_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsmooth2_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsmooth2_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsharp1_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsharp1_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampuplongsharp2_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampuplongsharp2_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsharp1_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsharp1_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupmediumsharp2_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupmediumsharp2_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsharp1_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsharp1_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_transitionrampupshortsharp2_0to50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_transitionrampupshortsharp2_0to50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_longbuzzforprogrammaticstopping_100() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_longbuzzforprogrammaticstopping_100" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_smoothhum1nokickorbrakepulse_50() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_smoothhum1nokickorbrakepulse_50" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_smoothhum2nokickorbrakepulse_40() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_smoothhum2nokickorbrakepulse_40" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_smoothhum3nokickorbrakepulse_30() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_smoothhum3nokickorbrakepulse_30" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_smoothhum4nokickorbrakepulse_20() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_smoothhum4nokickorbrakepulse_20" }; }
    UFUNCTION( BlueprintCallable, BlueprintPure, meta = ( NativeMakeFunc ) ) static const FSSGS_PredefinedTactilePattern pattern_smoothhum5nokickorbrakepulse_10() { return FSSGS_PredefinedTactilePattern{ "ti_predefined_smoothhum5nokickorbrakepulse_10" }; }

};