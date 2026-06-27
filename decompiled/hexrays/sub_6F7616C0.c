MMRESULT sub_6F7616C0()
{
  int v0; // eax@1
  int v1; // eax@4

  v0 = 0;
  do
  {
    if ( dword_70363500[v0] >= 0 )
      dword_70363500[v0] = -1;
    v1 = v0 + 1;
    if ( dword_70363500[v1] >= 0 )
      dword_70363500[v1] = -1;
    if ( dword_70363500[v1 + 1] >= 0 )
      dword_70363500[v1 + 1] = -1;
    if ( dword_70363500[v1 + 2] >= 0 )
      dword_70363500[v1 + 2] = -1;
    if ( dword_70363500[v1 + 3] >= 0 )
      dword_70363500[v1 + 3] = -1;
    if ( dword_70363500[v1 + 4] >= 0 )
      dword_70363500[v1 + 4] = -1;
    if ( dword_70363500[v1 + 5] >= 0 )
      dword_70363500[v1 + 5] = -1;
    if ( dword_70363500[v1 + 6] >= 0 )
      dword_70363500[v1 + 6] = -1;
    v0 = v1 + 7;
  }
  while ( v0 != 1024 );
  return timeEndPeriod(1u);
}
