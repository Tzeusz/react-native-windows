// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include <UI.Xaml.Media.h>
#include "CppWinRTIncludes.h"

namespace react {
namespace uwp {

// Some XAML controls use additional resource-brushes that need to be
// kept in sync with the Background, Foreground, and BorderBrush
// DependencyProperties. RN clients (windows-included) that
// want different backgroundColor, color, or borderColor
// depending on interactive states (e.g. PointerOver, Focused,
// and Disabled), expect to handle these state changes in js by
// re-rendering with different props in response to state
// change events (onFocus, onBlur, onMouseEnter, onMouseLeave)
// or when changing enabled/disabled props.
void UpdateControlBackgroundResourceBrushes(const xaml::FrameworkElement &element, const xaml::Media::Brush brush);

void UpdateControlForegroundResourceBrushes(const xaml::DependencyObject object, const xaml::Media::Brush brush);

void UpdateControlBorderResourceBrushes(const xaml::FrameworkElement &element, const xaml::Media::Brush brush);

void UpdateToggleSwitchThumbResourceBrushes(
    const xaml::Controls::ToggleSwitch &toggleSwitch,
    const xaml::Media::Brush thumbBrush);

void UpdateToggleSwitchTrackResourceBrushes(
    const xaml::Controls::ToggleSwitch &toggleSwitch,
    const xaml::Media::Brush onTrackBrush,
    const xaml::Media::Brush offTrackBrush);

} // namespace uwp
} // namespace react
