void __cdecl __noreturn sub_6F9628A0(int a1, int a2, int a3)
{
  _DWORD *v3; // eax@1
  int v4; // ebx@1
  int (*v5)(); // eax@1

  v3 = sub_6F962260();
  ++v3[1];
  *(_DWORD *)(a1 - 96) = 0;
  v4 = a1 - 32;
  *(_DWORD *)(v4 - 48) = a2;
  *(_DWORD *)(v4 - 44) = a3;
  *(_DWORD *)(v4 - 40) = sub_6F959EE0();
  v5 = sub_6F959740();
  *(_DWORD *)v4 = 1126902528;
  *(_DWORD *)(v4 - 36) = v5;
  *(_DWORD *)(v4 + 4) = 1196315971;
  *(_DWORD *)(v4 + 8) = sub_6F8B88B0;
  *(_DWORD *)(v4 - 64) = 1;
  sub_6F8A1C00(a1 - 32);
  sub_6F961E00((_QWORD *)(a1 - 32));
  sub_6F95D3C0();
}
