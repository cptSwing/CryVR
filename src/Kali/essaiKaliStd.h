int (_stdcall *MessageKali)(unsigned char* texte) = NULL;
int (_stdcall* QueryIndexKali) (void) = NULL;
int (_stdcall* StopKali) (void) = NULL;
void (_stdcall* SetVoixKali) (unsigned char nVoix) = NULL;
unsigned char (_stdcall* GetVoixKali) (void) = NULL;
unsigned char (_stdcall* GetNbVoixKali) (void) = NULL;
void (_stdcall* SetVolumeKali) (int volume) = NULL;
int	(_stdcall* GetVolumeKali) (void) = NULL;
void (_stdcall* SetDebitKali) (int debit) = NULL;
int (_stdcall* GetDebitKali) (void) = NULL;
void (_stdcall* SetHauteurKali) (int hauteur) = NULL;
int (_stdcall* GetHauteurKali) (void) = NULL;
void (_stdcall *SetModeLectureKali) (int modeLecture) = NULL;
void (_stdcall* SetComptaKali) (int compta) = NULL;
void (_stdcall* SetEpelleKali) (int epelle) = NULL;
void (_stdcall* SetSyntaxeKali) (int syntaxe) = NULL;
void (_stdcall* SetProsodieKali) (int prosodie) = NULL;
void (_stdcall* SetCoefPauseKali) (int coefPause) = NULL;
void (_stdcall* SetLocalisationKali) (int localisation) = NULL;
void (_stdcall* SauveInitKali) (void) = NULL;
void (_stdcall* ExitKali) (void) = NULL;