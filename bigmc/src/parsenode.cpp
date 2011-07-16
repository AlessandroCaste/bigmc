using namespace std;

#include <sstream>
#include <string>
#include <stdio.h>
#include <bigmc.h>

parsenode::parsenode() {
	filepos = 0;
}

parsenode::~parsenode() {
}

string parsenode::to_string() {
	return "<parsenode>";
}

bool parsenode::is_valid() {
	return false;
}

vector<parsenode *> parsenode::get_children() {
	vector<parsenode *> v;
	return v;
}

// PREFIX

prefixnode::prefixnode(parsenode *p, parsenode *q) {
	prefix = p;
	suffix = q;
}

prefixnode::~prefixnode() {
}

string prefixnode::to_string() {
	return prefix->to_string() + "." + suffix->to_string();
}

bool prefixnode::is_valid() {
	return prefix && suffix && prefix->is_valid() && suffix->is_valid();
}

vector<parsenode *> prefixnode::get_children() {
	vector<parsenode *> v;
	v.push_back(prefix);
	v.push_back(suffix);
	return v;
}

// PARALLEL

parallelnode::parallelnode(parsenode *l, parsenode *r) {
	lhs = l;
	rhs = r;
}

parallelnode::~parallelnode() {
}

string parallelnode::to_string() {
	return lhs->to_string() + " | " + rhs->to_string();
}

bool parallelnode::is_valid() {
	return lhs && rhs && lhs->is_valid() && rhs->is_valid();
}

vector<parsenode *> parallelnode::get_children() {
	vector<parsenode *> v;
	v.push_back(lhs);
	v.push_back(rhs);
	return v;
}

// REACTION

reactionnode::reactionnode(parsenode *red, parsenode *reac) {
	redex = red;
	reactum = reac;
}

reactionnode::~reactionnode() {
}

string reactionnode::to_string() {
	return redex->to_string() + " -> " + reactum->to_string();
}

bool reactionnode::is_valid() {
	return redex && reactum && redex->is_valid() && reactum->is_valid();
}

vector<parsenode *> reactionnode::get_children() {
	vector<parsenode *> v;
	v.push_back(redex);
	v.push_back(reactum);
	return v;
}


// NAME 

namenode::namenode(char *id) {
	nme = strdup(id);
	// TODO compute hash
}

namenode::~namenode() {
}

string namenode::to_string() {
	return string(nme);
}

bool namenode::is_valid() {
	return nme != NULL;
}

vector<parsenode *> namenode::get_children() {
	vector<parsenode *> v;
	return v;
}

// HOLE 

holenode::holenode(int id) {
	n = id;
}

holenode::~holenode() {
}

string holenode::to_string() {
	std::string s;
	std::stringstream out;
	out << n;
	return "$" + out.str();
}

bool holenode::is_valid() {
	return true;
}

vector<parsenode *> holenode::get_children() {
	vector<parsenode *> v;
	return v;
}


// SEQ

seqnode::seqnode(parsenode *l, parsenode *r) {
	lhs = l;
	rhs = r;
}

seqnode::~seqnode() {
}

string seqnode::to_string() {
	return lhs->to_string() + ", " + rhs->to_string();
}

bool seqnode::is_valid() {
	return lhs && rhs && lhs->is_valid() && rhs->is_valid();
}

vector<parsenode *> seqnode::get_children() {
	vector<parsenode *> v;
	v.push_back(lhs);
	v.push_back(rhs);
	return v;
}

// INTERFACE

interfacenode::interfacenode(parsenode *n, bool is_outer) {
	name = n;
	outer = is_outer;
}

interfacenode::~interfacenode() {
}

string interfacenode::to_string() {
	if(outer) {
		return "%outer " + name->to_string();
	} else
		return "%inner " + name->to_string();
}

bool interfacenode::is_valid() {
	return name && name->is_valid();
}

vector<parsenode *> interfacenode::get_children() {
	vector<parsenode *> v;
	v.push_back(name);
	return v;
}

// SIGNATURE

signaturenode::signaturenode(parsenode *n, bool is_active, int ar) {
	name = n;
	active = is_active;
	arity = ar;
}

signaturenode::~signaturenode() {
}

string signaturenode::to_string() {
	std::string s;
	std::stringstream out;
	out << arity;
	s = out.str();

	if(active) {
		return "%active " + name->to_string() + " : " + s;
	} else
		return "%passive " + name->to_string() + " : " + s;
}

bool signaturenode::is_valid() {
	return name && name->is_valid();
}

vector<parsenode *> signaturenode::get_children() {
	vector<parsenode *> v;
	v.push_back(name);
	return v;
}

// CONTROL


controlnode::controlnode(parsenode *id, parsenode *linkseq) {
	name = id;
	links = linkseq;
}

controlnode::~controlnode() {
}

string controlnode::to_string() {
	if(links != NULL) 
		return name->to_string() + "(" + links->to_string() + ")";
	else
		return name->to_string();
}

bool controlnode::is_valid() {
	return name && name->is_valid();
}

vector<parsenode *> controlnode::get_children() {
	vector<parsenode *> v;
	v.push_back(name);
	if(links != NULL)
		v.push_back(links);
	return v;
}












