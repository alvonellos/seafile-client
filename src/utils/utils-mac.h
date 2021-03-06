#ifndef SEAFILE_CLIENT_UTILS_MAC_H_
#include <QtGlobal>
#ifdef Q_WS_MAC
#include <QString>

int __mac_isHiDPI(void);
double __mac_getScaleFactor(void);
void __mac_setDockIconStyle(bool);

QString __mac_get_path_from_fileId_url(const QString &url);

#endif /* Q_WS_MAC */
#endif /* SEAFILE_CLIENT_UTILS_MAC_H_ */
