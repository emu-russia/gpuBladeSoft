void __usercall sub_6F756980(int a1@<ebp>)
{
  int v1; // ebx@3
  int v2; // esi@3
  char v3; // [sp+28h] [bp-114h]@1
  char v4; // [sp+30h] [bp-10Ch]@1

  sub_6F8B5DB0(a1, 0, (int)&v3);
  sub_6F760580((int)&v3, &v4, 0xFFu);
  if ( dword_6FBBFDF0 )
  {
    free((void *)dword_6FBBFDE0);
    dword_6FBBFDE0 = 0;
    dword_6FBBFDF0 = 0;
  }
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v1 = dword_6FD400C4;
  GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
  v2 = dword_6FD400C8;
  dword_6FBBFDE4 = v1;
  dword_6FBBFDEC = 3;
  dword_6FBBFDE8 = dword_6FD400C8;
  dword_6FBBFDE0 = (int)malloc(3 * v1 * dword_6FD400C8);
  if ( !dword_6FBBFDE0 )
    sub_6F756950();
  dword_6FBBFDF0 = 1;
  glPixelStorei(3333, 1);
  glReadPixels(0, 0, v1, v2, 6407, 5121, dword_6FBBFDE0);
  sub_6F72F480("Screenshot5 taken");
}
