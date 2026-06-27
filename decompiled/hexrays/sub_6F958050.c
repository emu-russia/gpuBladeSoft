int __thiscall sub_6F958050(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx@1
  int result; // eax@1

  v2 = this;
  sub_6F955B00((int)this);
  sub_6F957F30(v2, (int)(v2 + 27));
  v2[30] = a2;
  *((_WORD *)v2 + 58) = 0;
  result = a2 == 0;
  v2[28] = 0;
  v2[4] = 0;
  v2[5] = result;
  return result;
}
