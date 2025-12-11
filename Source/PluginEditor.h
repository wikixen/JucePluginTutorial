/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Plugin_tutorialAudioProcessorEditor  : 
    public juce::AudioProcessorEditor, 
    private juce::Slider::Listener
{
    public:
        Plugin_tutorialAudioProcessorEditor (Plugin_tutorialAudioProcessor&);
        ~Plugin_tutorialAudioProcessorEditor() override;

        //==============================================================================
        void paint (juce::Graphics&) override;
        void resized() override;

    private:
        void sliderValueChanged(juce::Slider* slider) override;
        // This reference is provided as a quick way for your editor to
        // access the processor object that created it.
        Plugin_tutorialAudioProcessor& audioProcessor;
        juce::Slider midiVolume;
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR 
        (Plugin_tutorialAudioProcessorEditor)
};
