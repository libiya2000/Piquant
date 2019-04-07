
// ChildFrm.cpp : CChildFrame ���ʵ��
//

#include "stdafx.h"
#include "App.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWndEx)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWndEx)
END_MESSAGE_MAP()

// CChildFrame ����/����

CChildFrame::CChildFrame()
{
	// TODO:  �ڴ����ӳ�Ա��ʼ������
}

CChildFrame::~CChildFrame()
{
}


BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸� CREATESTRUCT cs ���޸Ĵ��������ʽ
	cs.style &= ~(LONG)FWS_ADDTOTITLE;
	if( !CMDIChildWndEx::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}

// CChildFrame ���

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
	CMDIChildWndEx::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWndEx::Dump(dc);
}

void CChildFrame::ActivateFrame(int nCmdShow /*= -1*/)
{
	if (nCmdShow == -1) {
		nCmdShow = SW_SHOWMAXIMIZED;
	}
	CMDIChildWndEx::ActivateFrame(nCmdShow);
}

#endif //_DEBUG

// CChildFrame ��Ϣ��������