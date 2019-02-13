// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <Views/FrameworkElementViewManager.h>

namespace react { namespace uwp {

class CheckBoxViewManager : public FrameworkElementViewManager
{
  using Super = FrameworkElementViewManager;
public:
  CheckBoxViewManager(const std::shared_ptr<IReactInstance>& reactInstance);

  const char* GetName() const override;
  folly::dynamic GetCommands() const override;
  folly::dynamic GetNativeProps() const override;

  facebook::react::ShadowNode* createShadow() const override;

  void UpdateProperties(ShadowNodeBase* nodeToUpdate, XamlView viewToUpdate, folly::dynamic reactDiffMap) override;
  void DispatchCommand(XamlView viewToUpdate, int64_t commandId, const folly::dynamic& commandArgs) override;

protected:
  XamlView CreateViewCore(int64_t tag) override;

  friend class CheckBoxShadowNode;
};

} }