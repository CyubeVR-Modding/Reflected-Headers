#include "SlateAccessibleWidgetData.h"

USlateAccessibleWidgetData::USlateAccessibleWidgetData() {
    this->bCanChildrenBeAccessible = true;
    this->AccessibleBehavior = (ESlateAccessibleBehavior)72;
    this->AccessibleSummaryBehavior = (ESlateAccessibleBehavior)72;
}

