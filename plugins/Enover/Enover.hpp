
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: enover.dsp
// Name: Enover
// Author: Julius O. Smith III, Christopher Arndt, chmaha
// Copyright: Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>
// License: GPLv3
// Version: 0.1.0
//------------------------------------------------------------------------------






#pragma once
#ifndef Enover_Faust_pp_Gen_HPP_
#define Enover_Faust_pp_Gen_HPP_

#include <memory>

class Enover {
public:
    Enover();
    ~Enover();

    void init(float sample_rate);
    void clear() noexcept;

    void process(
        const float *in0,const float *in1,
        float *out0,float *out1,
        unsigned count) noexcept;

    enum { NumInputs = 2 };
    enum { NumOutputs = 2 };
    enum { NumActives = 7 };
    enum { NumPassives = 0 };
    enum { NumParameters = 7 };

    enum Parameter {
        p_Initial_Delay,
        p_LowFreq_X,
        p_Low_Decay,
        p_Mid_Decay,
        p_HF_Damping,
        p_Wet_Dry_Mix,
        p_Level,
        
    };

    struct ParameterRange {
        float init;
        float min;
        float max;
    };

    static const char *parameter_label(unsigned index) noexcept;
    static const char *parameter_short_label(unsigned index) noexcept;
    static const char *parameter_symbol(unsigned index) noexcept;
    static const char *parameter_unit(unsigned index) noexcept;
    static const ParameterRange *parameter_range(unsigned index) noexcept;
    static bool parameter_is_trigger(unsigned index) noexcept;
    static bool parameter_is_boolean(unsigned index) noexcept;
    static bool parameter_is_integer(unsigned index) noexcept;
    static bool parameter_is_logarithmic(unsigned index) noexcept;

    float get_parameter(unsigned index) const noexcept;
    void set_parameter(unsigned index, float value) noexcept;

    
    float get_Initial_Delay() const noexcept;
    
    float get_LowFreq_X() const noexcept;
    
    float get_Low_Decay() const noexcept;
    
    float get_Mid_Decay() const noexcept;
    
    float get_HF_Damping() const noexcept;
    
    float get_Wet_Dry_Mix() const noexcept;
    
    float get_Level() const noexcept;
    
    
    void set_Initial_Delay(float value) noexcept;
    
    void set_LowFreq_X(float value) noexcept;
    
    void set_Low_Decay(float value) noexcept;
    
    void set_Mid_Decay(float value) noexcept;
    
    void set_HF_Damping(float value) noexcept;
    
    void set_Wet_Dry_Mix(float value) noexcept;
    
    void set_Level(float value) noexcept;
    

public:
    class BasicDsp;

private:
    std::unique_ptr<BasicDsp> fDsp;



};




#endif // Enover_Faust_pp_Gen_HPP_