#include <QtGui>
#include <QWebView>
#include <QVBoxLayout>

#include "shib-login-dialog.h"

ShibLoginDialog::ShibLoginDialog(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout *vlayout = new QVBoxLayout();
    setLayout(vlayout);

    webview_ = new QWebView;
    webview_->load(QUrl("http://seafile.com"));
    vlayout->addWidget(webview_);
}
