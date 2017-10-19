/*
 * PhaseVocoder
 *
 * Copyright (c) Terence M. Darwen - tmdarwen.com
 *
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <AudioData/AudioData.h>
#include <vector>
#include <cstdint>

namespace Signal {

std::vector<int16_t> ConvertFloat64ToSigned16(const std::vector<double>& signal);
std::vector<int16_t> ConvertFloat64ToSigned16(const std::vector<double>& signal, std::size_t sampleCount);

std::vector<double> ConvertSigned16ToFloat64(const std::vector<int16_t>& signal);
std::vector<double> ConvertSigned16ToFloat64(const std::vector<int16_t>& signal, std::size_t sampleCount);

std::vector<int16_t> ConvertAudioDataToSigned16(const AudioData& audioData);
std::vector<int16_t> ConvertAudioDataToInterleavedSigned16(const AudioData& leftChannel, const AudioData& rightChannel);

AudioData ConvertSigned16ToAudioData(const std::vector<int16_t>& interleavedSigned16);
std::vector<AudioData> ConvertInterleavedSigned16ToAudioData(const std::vector<int16_t>& interleavedSigned16);

}
