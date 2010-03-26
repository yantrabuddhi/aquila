/**
 * @file Frame.cpp
 *
 * Handling signal frames.
 *
 * This file is part of the Aquila DSP library.
 * Aquila is free software, licensed under the MIT/X11 License. A copy of
 * the license is provided with the library in the LICENSE file.
 *
 * @package Aquila
 * @version 3.0.0-dev
 * @author Zbigniew Siciarz
 * @date 2007-2010
 * @license http://www.opensource.org/licenses/mit-license.php MIT
 * @since 0.2.2
 */

#include "Frame.h"

namespace Aquila
{
    /**
     * Creates the frame object - sets signal source and frame boundaries.
     *
     * Frame should not change original data, so the source is a const
     * reference.
     *
     * @param source const reference to signal source
     * @param indexBegin position of first sample of this frame in the source
     * @param indexEnd position of last sample of this frame in the source
     */
    Frame::Frame(const SignalSource& source, unsigned int indexBegin,
            unsigned int indexEnd):
        m_source(source), m_begin(indexBegin), m_end(indexEnd)
    {
    }
}
