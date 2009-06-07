/*
 * $Id$
 */

/*
 * Harbour Project source code:
 * QT wrapper main header
 *
 * Copyright 2009 Marcos Antonio Gambeta <marcosgambeta at gmail dot com>
 * Copyright 2009 Pritpal Bedi <pritpal@vouchcac.com>
 * www - http://www.harbour-project.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA (or visit the web site http://www.gnu.org/).
 *
 * As a special exception, the Harbour Project gives permission for
 * additional uses of the text contained in its release of Harbour.
 *
 * The exception is that, if you link the Harbour libraries with other
 * files to produce an executable, this does not by itself cause the
 * resulting executable to be covered by the GNU General Public License.
 * Your use of that executable is in no way restricted on account of
 * linking the Harbour library code into it.
 *
 * This exception does not however invalidate any other reasons why
 * the executable file might be covered by the GNU General Public License.
 *
 * This exception applies only to the code released by the Harbour
 * Project under the name Harbour.  If you copy code from other
 * Harbour Project or Free Software Foundation releases into a copy of
 * Harbour, as the General Public License permits, the exception does
 * not apply to the code that you add in this way.  To avoid misleading
 * anyone as to the status of such modified files, you must delete
 * this exception notice from them.
 *
 * If you write modifications of your own for Harbour, it is your choice
 * whether to permit this exception to apply to your modifications.
 * If you do not wish that, delete this exception notice.
 *
 */
/*----------------------------------------------------------------------*/

#include "hbapi.h"
#include "hbqt.h"

/*----------------------------------------------------------------------*/
#if QT_VERSION >= 0x040500
/*----------------------------------------------------------------------*/

/*
 *  Constructed[ 66/67 [ 98.51% ] ]
 *
 *  *** Unconvered Prototypes ***
 *  -----------------------------
 *
 *  QVector<QTextFormat> allFormats () const
 */


#include <QtGui/QTextDocument>


/*
 * QTextDocument ( QObject * parent = 0 )
 * QTextDocument ( const QString & text, QObject * parent = 0 )
 * ~QTextDocument ()
 */
HB_FUNC( QT_QTEXTDOCUMENT )
{
   hb_retptr( ( QTextDocument* ) new QTextDocument( hbqt_par_QObject( 1 ) ) );
}

/*
 * void addResource ( int type, const QUrl & name, const QVariant & resource )
 */
HB_FUNC( QT_QTEXTDOCUMENT_ADDRESOURCE )
{
   hbqt_par_QTextDocument( 1 )->addResource( hb_parni( 2 ), *hbqt_par_QUrl( 3 ), *hbqt_par_QVariant( 4 ) );
}

/*
 * void adjustSize ()
 */
HB_FUNC( QT_QTEXTDOCUMENT_ADJUSTSIZE )
{
   hbqt_par_QTextDocument( 1 )->adjustSize();
}

/*
 * QTextBlock begin () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_BEGIN )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->begin() ) );
}

/*
 * int blockCount () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_BLOCKCOUNT )
{
   hb_retni( hbqt_par_QTextDocument( 1 )->blockCount() );
}

/*
 * int characterCount () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_CHARACTERCOUNT )
{
   hb_retni( hbqt_par_QTextDocument( 1 )->characterCount() );
}

/*
 * virtual void clear ()
 */
HB_FUNC( QT_QTEXTDOCUMENT_CLEAR )
{
   hbqt_par_QTextDocument( 1 )->clear();
}

/*
 * QTextDocument * clone ( QObject * parent = 0 ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_CLONE )
{
   hb_retptr( ( QTextDocument* ) hbqt_par_QTextDocument( 1 )->clone( hbqt_par_QObject( 2 ) ) );
}

/*
 * QFont defaultFont () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_DEFAULTFONT )
{
   hb_retptr( new QFont( hbqt_par_QTextDocument( 1 )->defaultFont() ) );
}

/*
 * QString defaultStyleSheet () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_DEFAULTSTYLESHEET )
{
   hb_retc( hbqt_par_QTextDocument( 1 )->defaultStyleSheet().toLatin1().data() );
}

/*
 * QTextOption defaultTextOption () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_DEFAULTTEXTOPTION )
{
   hb_retptr( new QTextOption( hbqt_par_QTextDocument( 1 )->defaultTextOption() ) );
}

/*
 * QAbstractTextDocumentLayout * documentLayout () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_DOCUMENTLAYOUT )
{
   hb_retptr( ( QAbstractTextDocumentLayout* ) hbqt_par_QTextDocument( 1 )->documentLayout() );
}

/*
 * qreal documentMargin () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_DOCUMENTMARGIN )
{
   hb_retnd( hbqt_par_QTextDocument( 1 )->documentMargin() );
}

/*
 * void drawContents ( QPainter * p, const QRectF & rect = QRectF() )
 */
HB_FUNC( QT_QTEXTDOCUMENT_DRAWCONTENTS )
{
   hbqt_par_QTextDocument( 1 )->drawContents( hbqt_par_QPainter( 2 ), ( HB_ISNIL( 3 ) ? QRectF() : *hbqt_par_QRectF( 3 ) ) );
}

/*
 * QTextBlock end () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_END )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->end() ) );
}

/*
 * QTextCursor find ( const QString & subString, const QTextCursor & cursor, FindFlags options = 0 ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FIND )
{
   hb_retptr( new QTextCursor( hbqt_par_QTextDocument( 1 )->find( hbqt_par_QString( 2 ), *hbqt_par_QTextCursor( 3 ), ( QTextDocument::FindFlags ) hb_parni( 4 ) ) ) );
}

/*
 * QTextCursor find ( const QRegExp & expr, const QTextCursor & cursor, FindFlags options = 0 ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FIND_1 )
{
   hb_retptr( new QTextCursor( hbqt_par_QTextDocument( 1 )->find( *hbqt_par_QRegExp( 2 ), *hbqt_par_QTextCursor( 3 ), ( QTextDocument::FindFlags ) hb_parni( 4 ) ) ) );
}

/*
 * QTextCursor find ( const QString & subString, int position = 0, FindFlags options = 0 ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FIND_2 )
{
   hb_retptr( new QTextCursor( hbqt_par_QTextDocument( 1 )->find( hbqt_par_QString( 2 ), hb_parni( 3 ), ( QTextDocument::FindFlags ) hb_parni( 4 ) ) ) );
}

/*
 * QTextCursor find ( const QRegExp & expr, int position = 0, FindFlags options = 0 ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FIND_3 )
{
   hb_retptr( new QTextCursor( hbqt_par_QTextDocument( 1 )->find( *hbqt_par_QRegExp( 2 ), hb_parni( 3 ), ( QTextDocument::FindFlags ) hb_parni( 4 ) ) ) );
}

/*
 * QTextBlock findBlock ( int pos ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FINDBLOCK )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->findBlock( hb_parni( 2 ) ) ) );
}

/*
 * QTextBlock findBlockByLineNumber ( int lineNumber ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FINDBLOCKBYLINENUMBER )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->findBlockByLineNumber( hb_parni( 2 ) ) ) );
}

/*
 * QTextBlock findBlockByNumber ( int blockNumber ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FINDBLOCKBYNUMBER )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->findBlockByNumber( hb_parni( 2 ) ) ) );
}

/*
 * QTextBlock firstBlock () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_FIRSTBLOCK )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->firstBlock() ) );
}

/*
 * qreal idealWidth () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_IDEALWIDTH )
{
   hb_retnd( hbqt_par_QTextDocument( 1 )->idealWidth() );
}

/*
 * qreal indentWidth () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_INDENTWIDTH )
{
   hb_retnd( hbqt_par_QTextDocument( 1 )->indentWidth() );
}

/*
 * bool isEmpty () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_ISEMPTY )
{
   hb_retl( hbqt_par_QTextDocument( 1 )->isEmpty() );
}

/*
 * bool isModified () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_ISMODIFIED )
{
   hb_retl( hbqt_par_QTextDocument( 1 )->isModified() );
}

/*
 * bool isRedoAvailable () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_ISREDOAVAILABLE )
{
   hb_retl( hbqt_par_QTextDocument( 1 )->isRedoAvailable() );
}

/*
 * bool isUndoAvailable () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_ISUNDOAVAILABLE )
{
   hb_retl( hbqt_par_QTextDocument( 1 )->isUndoAvailable() );
}

/*
 * bool isUndoRedoEnabled () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_ISUNDOREDOENABLED )
{
   hb_retl( hbqt_par_QTextDocument( 1 )->isUndoRedoEnabled() );
}

/*
 * QTextBlock lastBlock () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_LASTBLOCK )
{
   hb_retptr( new QTextBlock( hbqt_par_QTextDocument( 1 )->lastBlock() ) );
}

/*
 * int lineCount () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_LINECOUNT )
{
   hb_retni( hbqt_par_QTextDocument( 1 )->lineCount() );
}

/*
 * void markContentsDirty ( int position, int length )
 */
HB_FUNC( QT_QTEXTDOCUMENT_MARKCONTENTSDIRTY )
{
   hbqt_par_QTextDocument( 1 )->markContentsDirty( hb_parni( 2 ), hb_parni( 3 ) );
}

/*
 * int maximumBlockCount () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_MAXIMUMBLOCKCOUNT )
{
   hb_retni( hbqt_par_QTextDocument( 1 )->maximumBlockCount() );
}

/*
 * QString metaInformation ( MetaInformation info ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_METAINFORMATION )
{
   hb_retc( hbqt_par_QTextDocument( 1 )->metaInformation( ( QTextDocument::MetaInformation ) hb_parni( 2 ) ).toLatin1().data() );
}

/*
 * QTextObject * object ( int objectIndex ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_OBJECT )
{
   hb_retptr( ( QTextObject* ) hbqt_par_QTextDocument( 1 )->object( hb_parni( 2 ) ) );
}

/*
 * QTextObject * objectForFormat ( const QTextFormat & f ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_OBJECTFORFORMAT )
{
   hb_retptr( ( QTextObject* ) hbqt_par_QTextDocument( 1 )->objectForFormat( *hbqt_par_QTextFormat( 2 ) ) );
}

/*
 * int pageCount () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_PAGECOUNT )
{
   hb_retni( hbqt_par_QTextDocument( 1 )->pageCount() );
}

/*
 * QSizeF pageSize () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_PAGESIZE )
{
   hb_retptr( new QSizeF( hbqt_par_QTextDocument( 1 )->pageSize() ) );
}

/*
 * void print ( QPrinter * printer ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_PRINT )
{
   hbqt_par_QTextDocument( 1 )->print( hbqt_par_QPrinter( 2 ) );
}

/*
 * void redo ( QTextCursor * cursor )
 */
HB_FUNC( QT_QTEXTDOCUMENT_REDO )
{
   hbqt_par_QTextDocument( 1 )->redo( hbqt_par_QTextCursor( 2 ) );
}

/*
 * QVariant resource ( int type, const QUrl & name ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_RESOURCE )
{
   hb_retptr( new QVariant( hbqt_par_QTextDocument( 1 )->resource( hb_parni( 2 ), *hbqt_par_QUrl( 3 ) ) ) );
}

/*
 * int revision () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_REVISION )
{
   hb_retni( hbqt_par_QTextDocument( 1 )->revision() );
}

/*
 * QTextFrame * rootFrame () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_ROOTFRAME )
{
   hb_retptr( ( QTextFrame* ) hbqt_par_QTextDocument( 1 )->rootFrame() );
}

/*
 * void setDefaultFont ( const QFont & font )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETDEFAULTFONT )
{
   hbqt_par_QTextDocument( 1 )->setDefaultFont( *hbqt_par_QFont( 2 ) );
}

/*
 * void setDefaultStyleSheet ( const QString & sheet )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETDEFAULTSTYLESHEET )
{
   hbqt_par_QTextDocument( 1 )->setDefaultStyleSheet( hbqt_par_QString( 2 ) );
}

/*
 * void setDefaultTextOption ( const QTextOption & option )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETDEFAULTTEXTOPTION )
{
   hbqt_par_QTextDocument( 1 )->setDefaultTextOption( *hbqt_par_QTextOption( 2 ) );
}

/*
 * void setDocumentLayout ( QAbstractTextDocumentLayout * layout )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETDOCUMENTLAYOUT )
{
   hbqt_par_QTextDocument( 1 )->setDocumentLayout( hbqt_par_QAbstractTextDocumentLayout( 2 ) );
}

/*
 * void setDocumentMargin ( qreal margin )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETDOCUMENTMARGIN )
{
   hbqt_par_QTextDocument( 1 )->setDocumentMargin( hb_parnd( 2 ) );
}

/*
 * void setHtml ( const QString & html )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETHTML )
{
   hbqt_par_QTextDocument( 1 )->setHtml( hbqt_par_QString( 2 ) );
}

/*
 * void setIndentWidth ( qreal width )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETINDENTWIDTH )
{
   hbqt_par_QTextDocument( 1 )->setIndentWidth( hb_parnd( 2 ) );
}

/*
 * void setMaximumBlockCount ( int maximum )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETMAXIMUMBLOCKCOUNT )
{
   hbqt_par_QTextDocument( 1 )->setMaximumBlockCount( hb_parni( 2 ) );
}

/*
 * void setMetaInformation ( MetaInformation info, const QString & string )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETMETAINFORMATION )
{
   hbqt_par_QTextDocument( 1 )->setMetaInformation( ( QTextDocument::MetaInformation ) hb_parni( 2 ), hbqt_par_QString( 3 ) );
}

/*
 * void setPageSize ( const QSizeF & size )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETPAGESIZE )
{
   hbqt_par_QTextDocument( 1 )->setPageSize( *hbqt_par_QSizeF( 2 ) );
}

/*
 * void setPlainText ( const QString & text )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETPLAINTEXT )
{
   hbqt_par_QTextDocument( 1 )->setPlainText( hbqt_par_QString( 2 ) );
}

/*
 * void setTextWidth ( qreal width )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETTEXTWIDTH )
{
   hbqt_par_QTextDocument( 1 )->setTextWidth( hb_parnd( 2 ) );
}

/*
 * void setUndoRedoEnabled ( bool enable )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETUNDOREDOENABLED )
{
   hbqt_par_QTextDocument( 1 )->setUndoRedoEnabled( hb_parl( 2 ) );
}

/*
 * void setUseDesignMetrics ( bool b )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETUSEDESIGNMETRICS )
{
   hbqt_par_QTextDocument( 1 )->setUseDesignMetrics( hb_parl( 2 ) );
}

/*
 * QSizeF size () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_SIZE )
{
   hb_retptr( new QSizeF( hbqt_par_QTextDocument( 1 )->size() ) );
}

/*
 * qreal textWidth () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_TEXTWIDTH )
{
   hb_retnd( hbqt_par_QTextDocument( 1 )->textWidth() );
}

/*
 * QString toHtml ( const QByteArray & encoding = QByteArray() ) const
 */
HB_FUNC( QT_QTEXTDOCUMENT_TOHTML )
{
   hb_retc( hbqt_par_QTextDocument( 1 )->toHtml( ( HB_ISNIL( 2 ) ? QByteArray() : *hbqt_par_QByteArray( 2 ) ) ).toLatin1().data() );
}

/*
 * QString toPlainText () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_TOPLAINTEXT )
{
   hb_retc( hbqt_par_QTextDocument( 1 )->toPlainText().toLatin1().data() );
}

/*
 * void undo ( QTextCursor * cursor )
 */
HB_FUNC( QT_QTEXTDOCUMENT_UNDO )
{
   hbqt_par_QTextDocument( 1 )->undo( hbqt_par_QTextCursor( 2 ) );
}

/*
 * bool useDesignMetrics () const
 */
HB_FUNC( QT_QTEXTDOCUMENT_USEDESIGNMETRICS )
{
   hb_retl( hbqt_par_QTextDocument( 1 )->useDesignMetrics() );
}

/*
 * void redo ()
 */
HB_FUNC( QT_QTEXTDOCUMENT_REDO_1 )
{
   hbqt_par_QTextDocument( 1 )->redo();
}

/*
 * void setModified ( bool m = true )
 */
HB_FUNC( QT_QTEXTDOCUMENT_SETMODIFIED )
{
   hbqt_par_QTextDocument( 1 )->setModified( hb_parl( 2 ) );
}

/*
 * void undo ()
 */
HB_FUNC( QT_QTEXTDOCUMENT_UNDO_1 )
{
   hbqt_par_QTextDocument( 1 )->undo();
}


/*----------------------------------------------------------------------*/
#endif             /* #if QT_VERSION >= 0x040500 */
/*----------------------------------------------------------------------*/

