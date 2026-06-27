void sub_6F753CE0()
{
  dword_6FD400E0 = 0;
  sub_6F752330(dword_70258D1C, dword_70258D18, dword_70258D0C, 1);
  sub_6F806910(dword_70258D08);
  if ( sub_6F8301E0((int)&unk_70258BA0, (int)&dword_70258B84) )
  {
    fwrite((const void *)dword_70258B84, dword_70258B88, 1u, (FILE *)dword_70258B80);
    fwrite((const void *)dword_70258B8C, dword_70258B90, 1u, (FILE *)dword_70258B80);
  }
  fflush((FILE *)dword_70258B80);
  fclose((FILE *)dword_70258B80);
  sub_6F82FA10((int)&unk_70258BA0);
  free((void *)dword_70258D0C);
  free((void *)dword_70258D10);
  sub_6F72F480("Video1 recording stopped");
}
