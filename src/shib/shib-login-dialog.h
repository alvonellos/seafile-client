#ifndef SEAFILE_CLIENT_SHIB_LOGIN_DIALOG_H
#define SEAFILE_CLIENT_SHIB_LOGIN_DIALOG_H

#include <QDialog>

class QWebView;

/**
 * Login with Shibboleth SSO
 */
class ShibLoginDialog : public QDialog {
    Q_OBJECT
public:
    ShibLoginDialog(QWidget *parent=0);

private:

    QWebView *webview_;
};

#endif /* SEAFILE_CLIENT_SHIB_LOGIN_DIALOG_H */
