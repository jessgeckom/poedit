
/*

    poedit, a wxWindows i18n catalogs editor

    ---------------
      commentdlg.h
    
      A trivial dialog for editing comments
    
      (c) Vaclav Slavik, 2001-2004

*/


#if defined(__GNUG__) && !defined(__APPLE__)
#pragma interface
#endif

#ifndef _COMMENTDLG_H_
#define _COMMENTDLG_H_

#include <wx/dialog.h>
class WXDLLEXPORT wxTextCtrl;

/** CommentDialog is a very simple dialog that lets the user edit
    catalog comments. Comment consists of one or more lines that
    begin with the '#' character. The user is presented with more
    user friendly representation with '#' removed. 
 */
class CommentDialog : public wxDialog
{
    public:
        /// Returns the given comment without the leading "# "
        static wxString RemoveStartHash(const wxString& comment);

        /// Returns the given comment with the leading "# " added
        static wxString AddStartHash(const wxString& comment);

        /** Ctor. 
            \param parent  Parent frame, FindFrame will float on it
            \param comment Initial value of comment
         */
        CommentDialog(wxWindow *parent, const wxString& comment);
        
        /// Returns the content of comment edit field.
        wxString GetComment() const;

    private:
        wxTextCtrl *m_text;

        void OnClear(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // _FINDFRAME_H_
