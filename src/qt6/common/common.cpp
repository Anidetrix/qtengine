#include "common.hpp"

#include <kcolorscheme.h>
#include <ksharedconfig.h>
#include <qpalette.h>
#include <qstring.h>

QPalette Style::loadColorScheme(const QString& filePath) {
	KSharedConfig::openConfig(filePath, KConfig::NoGlobals)->reparseConfiguration();

	auto config = KSharedConfig::openConfig(filePath);
	config->reparseConfiguration();
	return KColorScheme::createApplicationPalette(config);
}
